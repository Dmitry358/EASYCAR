#ifndef CONTAINER_H
#define CONTAINER_H

template <class T>
class Container{
    friend class Container<T>::iterator; //????
    friend class Container<T>::const_iterator; //????
private:
    T* vector;
    unsigned int _size;
    unsigned int _capacity;

public:
    class iterator;/////////
    class iterator{
        friend class Container<T>; //da vedere se associato

    private:
        T* pointer;
        bool past_the_end;

    public:
        iterator(T* ptr=nullptr, bool pte=false); //const T*??
        iterator(const iterator&);
        ~iterator(){};//destructor

        iterator& operator=(const iterator&);

        T* operator->() const;
        T& operator*() const;
        T& operator[](unsigned int) const; //controllare se indsigned //valora iteratore cambia?

        bool operator==(const iterator&) const;
        bool operator!=(const iterator&) const;
        bool operator>(const iterator&) const;
        bool operator<(const iterator&) const;
        bool operator>=(const iterator&) const;
        bool operator<=(const iterator&) const;


        iterator& operator++();
        iterator operator++(int);
        iterator& operator--();
        iterator operator--(int);
        iterator operator+(unsigned int) const;
        iterator operator-(unsigned int) const;
        iterator& operator+=(unsigned int);
        iterator& operator-=(unsigned int);

    };

    class const_iterator;  /////////
    class const_iterator {
        friend class Container<T>;//da vedere se associato

    private:
        const T* pointer;
        bool past_the_end;

    public:
        const_iterator(const T* ptr=nullptr, bool pte=false); //da PENSARCI
        const_iterator(const const_iterator&);
        const_iterator& operator=(const const_iterator&); //???
        ~const_iterator(){}; //destructor

        const T* operator->() const;
        const T& operator*() const;
        const T& operator[](unsigned int) const;

        bool operator==(const const_iterator&) const;
        bool operator!=(const const_iterator&) const;
        bool operator>(const const_iterator&) const;
        bool operator<(const const_iterator&) const;
        bool operator>=(const const_iterator&) const;
        bool operator<=(const const_iterator&) const;

        const_iterator& operator++();
        const_iterator operator++(int);
        const_iterator& operator--();
        const_iterator operator--(int);
        const_iterator operator+(unsigned int) const;
        const_iterator operator-(unsigned int) const;
        const_iterator& operator+=(unsigned int);        
        const_iterator& operator-=(unsigned int);
};
//----- FINE CONST_ITERATOR

 //----- CONTAINER INIZ
    explicit Container(unsigned int s=0, const T& t = T());

    Container(const Container&); //explicit??

    ~Container();

    Container& operator=(const Container&); //Container<T>&    

    bool operator==(const Container&) const; //Container<T>&

    iterator begin() const;

    const_iterator cbegin() const; //cbegin()

    iterator end() const;

    const_iterator cend() const;

    unsigned int size() const;

    unsigned int capacity() const;

    //resize()
    bool empty() const;
    bool full() const;

    T& operator[](unsigned int) const;  //const?? controllo overrange??
    T& operator[] (iterator) const;
    T& front();
    const T& front() const;
    T& back();
    const T& back() const;

    void push_back(const T&); //controllare se vector è vuoto e size==capacity
    void pop_back();

    iterator insert(iterator, const T&);
    void insert(iterator, unsigned int, const T&);
    void insert(iterator, iterator, iterator); //InputIterator/ , /InputIterator/
    iterator erase(iterator);
    iterator erase(iterator, iterator);

    void clear();

    //
    //std::ostream& operator<<
 //----- CONTAINER FINE

};

 //----- IMPL. CONTAINER INIZIO
//SOSTITUIRE FRO CON COPY()
template<class T> //VALORI DI DEFAULT
Container<T>::Container(unsigned int s, const T& t): vector(s==0 ? nullptr : new T[s]), _size(s), _capacity(s){
    for(int i=0; i<s; ++i) vector[i]=t;
}

template<class T> //VALORI DI DEFAULT
Container<T>::Container(const Container& c): vector(c._size==0 ? nullptr : new T[c._size]), _size(c._size), _capacity(c._size){
    for(int i=0; i<c._size; ++i) vector[i]=c.vector[i];
}

template<class T> //VALORI DI DEFAULT
Container<T>::~Container() { if(vector) delete[] vector; }

template<class T> //VALORI DI DEFAULT
Container<T>& Container<T>::operator=(const Container& c){
    if(this != &c){
        delete[] vector;
        _size = c._size;
        _capacity = c._capacity;
        vector = c._size==0 ? nullptr : new T[c._size];
        for(int i=0; i < c._size; ++i) vector[i]=c.vector[i];
    }
    return *this;
}

template<class T>
bool Container<T>::operator==(const Container& c) const { //const Container<T>
    if(this == &c) return true;
    if(_size!=c._size) return false;
    for(int i=0;i<_size;i++){
          if(vector[i]!=c.vector[i]) return false;
    }
    return true;
}

template<class T>
typename Container<T>::iterator Container<T>::begin() const { return iterator(vector); }

template<class T>
typename Container<T>::const_iterator Container<T>::cbegin() const { return const_iterator(vector); }

template<class T>
typename Container<T>::iterator Container<T>::end() const {
    if(size==0) return iterator();
    return iterator(vector+size, true);
};

template<class T>
typename Container<T>::const_iterator Container<T>::cend() const {
    if(size==0) return const_iterator();
    return const_iterator(vector+size, true);
};

template<class T>
unsigned int Container<T>::size() const { return _size; }

template<class T>
unsigned int Container<T>::capacity() const { return _capacity; }

template<class T>
bool Container<T>::empty() const { return _size==0; }

template<class T>
bool Container<T>::full() const { return _size==_capacity; }

template<class T>//fare controllo dei range??
T& Container<T>::operator[](unsigned int i) const { return vector[i]; }

template<class T>//fare controllo dei range??
T& Container<T>::operator[](iterator i) const {  } //Container::iterator i

template<class T>
T& Container<T>::front(){}

template<class T>
const T& Container<T>::front() const {}

template<class T>
T& Container<T>::back(){}

template<class T>
const T& Container<T>::back() const {}

template<class T>//controllare s è vuoto (allora prima istanziare un nuovo array
void Container<T>::push_back(const T&){}

template<class T>//controllare s è ultimo elemento (allora dopo delete[] array
void Container<T>::pop_back(){}

template<class T>
typename Container<T>::iterator Container<T>::insert(iterator position, const T& val){}

template<class T>
void Container<T>::insert(iterator position, unsigned int n, const T& val){}

//template <class InputIterator>
template<class T>
void Container<T>::insert(iterator position, iterator first, iterator last){} ///InputIterator/

template<class T>
typename Container<T>::iterator Container<T>::erase(iterator position){}

template<class T>
typename Container<T>::iterator Container<T>::erase(iterator first, iterator last){}

template<class T>
void  Container<T>::clear(){}
//----- CONTAINER FINE

//----- IMPL. ITERATOR INIZIO
template<class T>//const T*?? //deep copy on pointer??
Container<T>::iterator::iterator(T* ptr, bool pte): pointer(ptr), past_the_end(pte){}

template<class T> //deep copy on pointer??
Container<T>::iterator::iterator(const iterator& it): pointer(it.pointer), past_the_end(it.past_the_end){}

template<class T>
typename Container<T>::iterator& Container<T>::iterator::operator=(const iterator& it){
    if(this!=&it){ //pointer=it.pointer;
        pointer=it.pointer;
        past_the_end=it.past_the_end;
    }
    return *this;
}

template<class T>
T* Container<T>::iterator::operator->() const { return pointer; }

template<class T>
T& Container<T>::iterator::operator*() const { return *pointer; }

template<class T>//signed int i?? //serve modificare puntatore??
T& Container<T>::iterator::operator[](unsigned int i) const { return *(pointer+i); }

template<class T>
bool Container<T>::iterator::operator==(const iterator& it) const { return pointer == it.pointer; }

template<class T>
bool Container<T>::iterator::operator!=(const iterator& it) const { return pointer != it.pointer; }

template<class T>
bool Container<T>::iterator::operator>(const iterator& it) const { return pointer > it.pointer; }

template<class T>
bool Container<T>::iterator::operator<(const iterator& it) const { return pointer < it.pointer; }

template<class T>
bool Container<T>::iterator::operator>=(const iterator& it) const { return pointer >= it.pointer; }

template<class T>
bool Container<T>::iterator::operator<=(const iterator& it) const { return pointer <= it.pointer; }

template<class T> //DA RIVEDERE forte (pointer) == (vector+_size) e pointer=vector;
typename Container<T>::iterator& Container<T>::iterator::operator++(){//PROF
    if(pointer){
        if(!past_the_end){
            pointer+=1;
            if((pointer) == (vector+_size)) past_the_end = true;  // parentesi secondi??
        }
    }    
    return *this;
}

template<class T> //DA RIVEDERE forte (pointer) == (vector+_size) e pointer=vector;
typename Container<T>::iterator Container<T>::iterator::operator++(int){//PROF //int e basta??
    iterator aux(*this);
    if(pointer){
        if(!past_the_end){
            pointer+=1;
            if((pointer) == (vector+_size)) past_the_end = true;  // parentesi secondi?? //accesso vector
        }
    }    
    return aux;
}

template<class T> //DA RIVEDERE (pointer==vector)
typename Container<T>::iterator& Container<T>::iterator::operator--(){//PROF
    if(pointer){
        if(pointer==vector) pointer=nullptr; //accesso vector
        else{
            if(past_the_end) past_the_end=false;
            pointer-=1;
        }
    }
    return *this;
}

template<class T> //DA RIVEDERE (pointer==vector)
typename Container<T>::iterator Container<T>::iterator::operator--(int){//PROF
    iterator aux(*this);
    if(pointer){
        if(pointer==vector) pointer=nullptr; //accesso vector
        else{
            if(past_the_end) past_the_end=false;
            pointer-=1;
        }
    }
    return aux;
}

template<class T> //DA RIVEDERE unsigned int i??
typename Container<T>::iterator Container<T>::iterator::operator+(unsigned int i) const {//unsigned??
    iterator temp(*this);
    if(temp.pointer){
        if(!temp.past_the_end){
            if((temp.pointer+i) >= (vector+_size)){  // parentesi secondi?? accesso vector
                temp.past_the_end = true;
                temp.pointer=vector+_size; //accesso vector
            }
            else temp.pointer+=i;
        }
    }
    return temp;
}

template<class T> //DA RIVEDERE
typename Container<T>::iterator Container<T>::iterator::operator-(unsigned int i) const { //unsigned??
    iterator temp(*this);
    if(temp.pointer){
        if(temp.past_the_end) temp.past_the_end=false;
        if((temp.pointer-i) >= vector) temp.pointer-=i; // parentesi secondi?? accesso vector
        else temp.pointer=nullptr;
    }
    return temp;
}

template<class T> //DA RIVEDERE
typename Container<T>::iterator& Container<T>::iterator::operator+=(unsigned int i){
    if(pointer){//PROF
        if(!past_the_end){
            if((pointer+i) >= (vector+_size)){  // parentesi secondi?? //accesso vector
                past_the_end = true;
                pointer=vector+_size; //accesso vector
            }
            else pointer+=i;
        }
    }
    return *this;
}

template<class T> //DA RIVEDERE
typename Container<T>::iterator& Container<T>::iterator::operator-=(unsigned int i){//PROF
    if(pointer){
        if(past_the_end) past_the_end=false;
        if((pointer-i) >= vector) pointer-=i; // parentesi secondi?? //accesso vector
        else pointer=nullptr;
    }
    return *this;
}
//----- IMPL. ITERATOR FINE

//----- IMPL. CONST_ITERATOR INIZIO
template<class T>
Container<T>::const_iterator::const_iterator(const T* ptr, bool pte): pointer(ptr), past_the_end(pte){} //da PENSARCI

template<class T>
Container<T>::const_iterator::const_iterator(const const_iterator& cit): pointer(cit.pointer), past_the_end(cit.past_the_end){} //da PENSARCI

template<class T>
typename Container<T>::const_iterator& Container<T>::const_iterator::operator=(const const_iterator& cit){ //DA RIVEDERE
    if(this!=&cit){ //pointer=cit.pointer;
        pointer=cit.pointer;
        past_the_end=cit.past_the_end;
    }
    return *this;
}

template<class T>//!!!!
const T* Container<T>::const_iterator::operator->() const { return pointer; }

template<class T>//!!!!!!
const T& Container<T>::const_iterator::operator*() const { return *pointer; }

template<class T>
const T& Container<T>::const_iterator::operator[](unsigned int i) const { return *(pointer+i); } //iterator non cambia valore??

template<class T>//PROF // const const_iterator&??
bool Container<T>::const_iterator::operator==(const const_iterator& cit) const { return pointer == cit.pointer; }

template<class T> //PROF // const const_iterator&??
bool Container<T>::const_iterator::operator!=(const const_iterator& cit) const { return pointer != cit.pointer; }

template<class T> //DA RIVEDERE
bool Container<T>::const_iterator::operator>(const const_iterator& cit) const { return pointer > cit.pointer; }

template<class T> //DA RIVEDERE
bool Container<T>::const_iterator::operator<(const const_iterator& cit) const { return pointer < cit.pointer; }

template<class T> //DA RIVEDERE
bool Container<T>::const_iterator::operator>=(const const_iterator& cit) const { return pointer >= cit.pointer; }

template<class T> //DA RIVEDERE
bool Container<T>::const_iterator::operator<=(const const_iterator& cit) const { return pointer <= cit.pointer; }

template<class T> //DA RIVEDERE
typename Container<T>::const_iterator& Container<T>::const_iterator::operator++(){//PROF
    if(pointer){
        if(!past_the_end){
            pointer+=1;
            if((pointer) == (vector+_size)) past_the_end = true;  // parentesi secondi??
        }
    }
    return *this;
}

template<class T> //DA RIVEDERE forte (pointer) == (vector+_size) e pointer=vector;
typename Container<T>::const_iterator Container<T>::const_iterator::operator++(int){//PROF //int e basta??
    const_iterator aux(*this);
    if(pointer){
        if(!past_the_end){
            pointer+=1;
            if((pointer) == (vector+_size)) past_the_end = true;  // parentesi secondi??
        }
    }
    return aux;
}

template<class T> //DA RIVEDERE (pointer==vector)
typename Container<T>::const_iterator& Container<T>::const_iterator::operator--(){//PROF
    if(pointer){
        if(pointer==vector) pointer=nullptr;
        else{
            if(past_the_end) past_the_end=false;
            pointer-=1;
        }
    }
    return *this;
}

template<class T> //DA RIVEDERE (pointer==vector)
typename Container<T>::const_iterator Container<T>::const_iterator::operator--(int){//PROF
    const_iterator aux(*this);
    if(pointer){
        if(pointer==vector) pointer=nullptr;  //accesso vector
        else{
            if(past_the_end) past_the_end=false;
            pointer-=1;
        }
    }
    return aux;
}

template<class T> //DA RIVEDERE
typename Container<T>::const_iterator Container<T>::const_iterator::operator+(unsigned int i) const {//PROF
    const_iterator temp(*this);
    if(temp.pointer){
        if(!temp.past_the_end){
            if((temp.pointer+i) >= (vector+_size)){  // parentesi secondi??
                temp.past_the_end = true;
                temp.pointer=vector+_size;
            }
            else temp.pointer+=i;
        }
    }
    return temp;
}

template<class T> //DA RIVEDERE
typename Container<T>::const_iterator Container<T>::const_iterator::operator-(unsigned int i) const {//PROF
    const_iterator temp(*this);
    if(temp.pointer){
        if(temp.past_the_end) temp.past_the_end=false;
        if((temp.pointer-i) >= vector) temp.pointer-=i; // parentesi secondi?? accesso vector
        else temp.pointer=nullptr;
    }
    return temp;
}

template<class T> //DA RIVEDERE
typename Container<T>::const_iterator& Container<T>::const_iterator::operator+=(unsigned int i){//PROF
    if(pointer){
        if(!past_the_end){
            if((pointer+i) >= (vector+_size)){  // parentesi secondi?? //accesso vector
                past_the_end = true;
                pointer=vector+_size; //accesso vector
            }
            else pointer+=i;
        }
    }
    return *this;
}

template<class T> //DA RIVEDERE
typename Container<T>::const_iterator& Container<T>::const_iterator::operator-=(unsigned int i){//PROF
    if(pointer){
        if(past_the_end) past_the_end=false;
        if((pointer-i) >= vector) pointer-=i; // parentesi secondi??
        else pointer=nullptr;
    }
    return *this;
}
//----- CONST ITERATOR FINE

#endif // CONTAINER_H
