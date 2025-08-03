#include<bits/stdc++.h>
using namespace std;

int main(){
    //if I need to store 5 variables
    //normally what I do is
    int a[5] = {2, 4, 5, 5, 6};
    //it will give me access to 5 possible indexes
    //now, If I need to modify the array or
    //one more element to the array
    //I can not modify the size of the array
    //beacause, this array has already declared with size 5
    //arrays are constant in size

    //this is where vector comes in
    //vector is a container which is dynamic in nature
    //so, vector is a container
    //whcih stores elements
    //in a similar fashion as the array does

    //vector keyword <data_type> name;

    vector<int>v;//this line creates an empty container--{}
    v.push_back(1);//I'm empty I'm gonna take 1
    v.emplace_back(2);//similar to push back
    //it dynamically increases it's size and pushes 2 at the back
    //generally emplace_back faster than push_back

    //can we define vector of pair data type
    //yes we can

    vector<pair<int, int>>vec;
    vec.push_back({1,2});//have to {}
    vec.emplace_back(1,2);//automatically asumes as pair

    //what if I want to declare a container with a lot of elements--already filled
    vector<int> v(5, 100);//size-5, value-100
    vector<int>v(5);//{0,0,0,0,0} or garbage value--depends on the compiler

    //what if we want to copy a vector into another
    vector<int>v1(5, 20);
    vector<int>v2(v1);//copy of v1 not the same one

    //even if we are prefining the size we can still increase the size


    //now, how do we access elements in a vector
    //one way is to access it like the array v[0]

    //another way is to use an iterator

    //iterator basically means it points to the memory address
    vector<int>::iterator it = v.begin();//data-structure, data-type, ::, name
    //so, v.begin()--points to the memory not to the element
    //so, if we try to print v.begin()--it will print the memory address not the element
    //in order to access anything which is in the memory, we need write *(it)

    //now, do we have any iterators apart from begin
    //of course we have
    //[10, 20, 30, 40]
    vector<int>::iterator it = v.end();//end--now end not will points to 40 rather it will point right after 40;points after last element
    //the memory location that is after 40
    //it--, then it will move to 40
    //so, end points to a memory location that is right after the last element
    vector<int>::iterator it = v.rend();//reverse end--not many useage
    vector<int>::iterator it = v.rbegin();//reverse begin--not many usage

    v.back();//the last element in the vector


    //now, if I want to print the vectors there are couple of ways
    //[10. 20, 30]; I wanna print it
    //the simplest way is; I know the indexes and will loop over them

    //another way is, I am gonna do it iterator wise
    //so, I am going to run the iterator from begin until it reaches the end

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }

    //but but but, there is shortcut; no one like to write 'vector<int>::iterator' long syntaxes like this
    //stl gives us something like auto
    //so, if we write auto it automatically assign to a vector iterator
    //we don't need to defines the data type, it automatically finds the data type
    //according to the data the data type is defined

    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it) << " ";
    }

    //other way to print the vector is using the for each loop
    for(auto it: v){
        cout<< it << " ";
    }
    //it on v 
    
    //now see the deletion in a vector

    //there is something as an erase function
    //{10, 20, 12, 23}
    v.erase(v.bigin() + 1);//erase(iterator[location])--and erase that memory
    //that's the way of deleting one element

    //{10, 20, 30, 40, 50}
    //now, I want to delete 20 and 30
    //erase[start_address, end_adress_after_the_element)*--start included but end not included
    v.erase(v.begin() + 1, v.begin() + 3);

    //Insert functin
    vector<int>v(2, 100);//{100, 100}
    //now I want to inset 300 right at the begining
    v.insert(v.begin(), 300);//{300, 100, 100} need to give the first position
    //now how about inserting in between
    v.insert(v.begin() + 1, 10);//{300, 10, 100, 100}
    //now those are for inserting a single element
    //now I want to insert two 30s
    v.insert(v.begin()+2, 2, 30);//the first position, how many numbers, the numbers I want to insert

    //now what if I have a vector and I want to insert it into some other vector
    vector<int>copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());//{50,50,300,10,30,30,100,100}

    //{20,30}
    v.size();//will give how many elements in the vector--2
    v.pop_back();//pops out the last element from the vector

    //v1{10, 20}
    //v2{30, 40}
    v1.swap(v2);//v1--{30, 40}--v2{10, 20}

    v.clear();//erases the entire vector{}

    v.empty();//{1}-not empty; minimum one element--if the vec has nothing then "true" it's empty

    //------------------------------------------------------------------------------------------------------------------

    //now move to another container which is list

    //list is similar like vector but only difference is list gives us front operation as well.

    list<int>ls;

    ls.push_back(2);//{2}
    ls.emplace_back(5);//{2, 5}

    ls.push_front(4);//{4, 2, 5}--pushes 4 at the front--in vector we needed to use insert at particular position
    ls.emplace_front();
    //if we are inserting somewhere it does take a lot of time
    //insert operation in vector is very costly
    //internal operation in a list is a doubly linked list
    //for a vector a singly linked list is maintained
    //push_front() is very very cheap in terms of time complexity

    //rest functions are same as vector
    //begin, end, rbegin, rend, clear, insert, size swap

    //--------------------------------------------------------------------------------------------------------------------

    //the next container in the stl is Deque

    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1, 2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}

    dq.back();
    dq.front();

    //rest functions same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap

    //--------------------------------------------------------------------------------------------------------------------

    //the next container in the stl is stack

    //stack is something that maintains LIFO--Last In First Out
    //the guy who went in last is the guy who will comes out first
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(3);//{1,2,3,3}
    st.emplace(5);//{1,2,3,3,5}

    cout<< st.top();//prints 5 "**st[2] is invalid**"
    st.pop();//st looks like {1,2,3,3}
    cout<< st.top();//3
    cout<<st.size();//4

    cout<< st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

    //-----------------------------------------------------------------------------------------------------------------------

    //the next container in the stl is queue

    ////queue is something that maintains FIFO--First In First Out
    //the guy who went in first is the guy who will comes out first

    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.emplace_back(4);//{1,2,4}

    q.back() += 5;//it makes the last entered element 4+5=9

    cout<< q.back();//9

    cout<< q.front();//1

    q.pop();//{2,9}

    cout<<q.front();//2

    //size, swap, empty same as stack

    //---------------------------------------------------------------------------------------------------------------------------

    //the next container is priority queue

    //as the name recomends--priority
    //the guy who has the largest value stays at the top
    //this is not a lineat data structure
    //inside of it a tree data structure is maintained
    //this is also known as max heap
    //push-pop-->logn, top-->O(1)

    priority_queue<int>pq;

    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout<<pq.top();//prints 10

    pq.pop();//{2,5,8}

    cout<<pq.top();//prints 8

    //size, swap, empty functions same as others

    //Minimum Heap 
    //what if I want a priority queue which stores the minumum element at the top
    
    priority_queue<int, vector<int>, greater<int>>pq;
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top();//prints 2

    //this is also known as min heap


    //---------------------------------------------------------------------------------------------------------------------------

    //the next container in the stl in Set

    //it stores everything in the sorted order and stores unique values
    //again not a linear container- a tree is maintained
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2};doesn't insert 2 again
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    //Functionality of insert in vector
    //can be used also, that only increases
    //efficiency

    //begin(), end(), rbegin(), rend(), size(),
    //empty() and swap are same as those of above

    //{1,2,3,4,5}
    auto it = st.find(3);//return the iterator--address

    //{1,2,3,4,5}
    auto it = st.find(6);//element is not in the set
    //if a element not in the set
    //it will always return st.end()
    //that means a iterator that is points to right after the end

    st.erase(5);//erases 5 // takes logarithmic time

    int cnt = st.count(1);//if present 1 otherwise 0

    auto it = st.find(3);
    st.erase(it);//it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);//after erase{1,4,5}[first, last)

    //lower_bound() and upper_bound() function works in the same way
    //as it vector it does

    //this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    //insert erase find lower upper logarithmic

    //other resource
    //striver binary seach 4 problems 

    //------------------------------------------------------------------------------------------------------------------------------

    //now look at another container in the stl which is Multiset

    //it will only obey sorted and it will not obey unique**
    //it will store multiple occurance of an element

    multiset<int>ms;

    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//it will erase all 1's

    int cnt = ms.count(1);//count me the number of 1's in the multiset

    //only a single 1 erased

    ms.erase(ms.find(1));//will erase the first occurance of 1--finds points to the iterator

    ms.erase(ms.find(1), ms.find(1)+2);//find 1 and go till 2 and erase them--first two occurance will be erased

    //all the other functions are same as set

    //---------------------------------------------------------------------------------------------------------------------------------

    //we have learn about set and multiset now look at unorderd_set

    //everything is similar to set 
    //but it does not store in "sorted" order
    //it does store unique values

    unorderd_set<int>ust;
    //lower_bound and upper_bound function
    //does not work, rest all functions are same
    //as above is does not store in any
    //particular order, it has better complexity
    //than set in most cases, except some when collison happens
    
    //most of the times all the operations are O(1)
    //worst case O(N)--happens once in a blue moon

    //-----------------------------------------------------------------------------------------------------------------------------------

    //the next container in stl is the Map container

    //stores as key:value pair
    //keys are unique--values can be duplicate
    //keys can be of any data type, same for values


    map<int, int>mpp;
    map<pair<int, int>, int>mpp;//key is pair of two integers value is one integer


    mpp[1]=2;//I am saying on the key '1' can you please store '2'
    mpp.emplace({3,1});//3 is the key and value is 1
    mpp.insert({2,4});//2 is the key and value is 4

    //**Map stores unique keys in sorted order**

     map<int, pair<int, int>>mpp;//key is interger and value is pair of two integers

     mpp[{2,3}]=10;//the key is {2,3} and the value is 10

     //accessing map via for each loop

     for(auto it:mpp){
        cout<<it.first << " " << it.second<<endl;
     }

     cout mpp[1];//print the value 2--because at 1 we stored 2
     cout mpp[5];//doesn't exist so prints 0

     auto it = mpp.find(3);
     cout<< *(it).second;//1

     auto it = mpp[5];//doesn't exist--return mpp.end()--that means after the map

     auto it = mpp.lower_bound(2);
     auto it = mpp.upper_bound(3);

     //erase, swap, size, empty, are same as above

     //-----------------------------------------------------------------------------------------------------------

     //the next is multimap

     //everything same as map, only it can stores multiple keys
     //only map[key] cannot be used here
     //sorted order
     //{1,2},{1,3}

     //---------------------------------------------------------------------------------------------------------------

     //then comes the unordered_map

     //same as set and unordered_set
     //it will store unique keys
     //it is not sorted
     //it will be randomized

     //map-logn
     //un_map--almost O(1)--blue_moon o(N)

     // That's all about containers now let's learn some mandatory algorithms

     //------------------------------------------------------------------------------------------------------------------

     //------------------------------------------------------------------------------------------------------------------

     //***************************************  ALGORITHMS  ************************************************************
     sort(a, a+n);
     sort(v.begin(), v.end());

     //{1,3,5,2}--I want {5,2} portion to be sorted
     sort(a+2, a+4);
     //what if I want to sort them descending order
     sort(a, a+n, greater<int>);
     
     //we have sorting in asc and desc order
     //what if I want to sort it in my way

     pair<int, int>a[] = {{1,2},{2,1},{4,1}};

     //sort it according to the second element
     //if second element is same, then sort
     //it according to first element but in desc

     //{2,1} {4,1} {1,2}--second ele--1,1,2
     //but second element is same
     //need to sort based on first element
     //but in desc
     //{4,1} {2,1} {1,2}--first 4,2 in desc
     //for that

     sort(a, a+n, comp);//first it, last it, comp
     //comp--self return comparator
     //nothing but a boolean function
     //this has to retun true or false

    //{first,second}--p1
    //{first, second}--p2

     bool comp(pair<int, int>p1, pair<int, int>p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;//swap internally
        //they are same--only condition left
        if(p1.first > p2.first) return true;
        return false;//swap it
     }

     //analyze everything when write a comparator
     //always try to analyze in terms to two pair

     int num = 7;//binary-111
     int cnt = __builtin_popcount();
     //3 bits as 1
     //00000111
     //builtin_popcount--will return number of setbits--3

     //if num = 6--110
     //bltin_popcnt--return--2

     long long num = 1657786578687;
     int cnt = __builtin_popcountll();//for long long

     string s = "123";
     //next_permutation
     //if I have string as 123
     //I want to have all the permutation of it
     //new perm-132
     //213
     //231
     //312
     //321
     //3!=6

     //first need to print the original string
     //then every step print the next permutation
     //if no more permutation it bcomes null
     //and return a false
     //while loop breaks

     do{
        cout<< s << endl;
     }while(next_permutation(s.begin(), s.end()));

    //what if the string was 231
    //it would have started form 231--312--321
    //start from the sorted guy
    //if I want to print all the permutation

    int maxi = *max_element(a, a+n);
    //from an container--address --*adress-element












    return 0;
}