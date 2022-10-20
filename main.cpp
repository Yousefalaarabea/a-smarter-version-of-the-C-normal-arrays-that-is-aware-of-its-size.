//#include <iostream>
//using namespace std;
//
//template<class t>
//class smart_arr
//{
//private:
//    int size_arr=0;
//    int len_arr=0;
//    t *arr ;
//
//public:
//    smart_arr() {} ///default constructor
//
//    smart_arr(int l) ///parametarized constructor
//    {
//        size_arr = l;
//        arr = new t [size_arr];
//        allocate_arr();
//    }
//
//    smart_arr& operator=(const smart_arr& ob2) ///operator =
//    {
//        size_arr = ob2.size_arr;
//        delete[] arr;
//        arr = new t [size_arr];
//        for(int i=0; i<size_arr; i++)
//        {
//            arr[i]=ob2.arr[i];
//        }
//        return *this;
//    }
//
//    smart_arr(smart_arr& ob2)  ///copy constructor
//    {
//        size_arr = ob2.size_arr;
//        arr = new t* [size_arr];
//        for(int i=0; i<size_arr; i++)
//        {
//            arr[i]=ob2.arr[i];
//        }
//
//    }
//
//    void allocate_arr()  ///to pass elements
//    {
//        for(int i=0; i<size_arr; i++)
//        {
//            cin>>arr[i];
//        }
//        display(); ///to out the elements
//    }
//
//    int sizearr() ///show arr size
//    {
//        return size_arr;
//    }
//
//    t& operator[](int k) ///access on position in the arr
//    {
//        if(k >= size_arr || k<0)
//        {
//            cout<<"Not valid pos"<<endl;
//            return 0;
//        }
//        else
//        {
//            return arr[k];
//        }
//    }
//
//    void display() ///output elements
//    {
//
//        for(int i=0; i<size_arr; i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//
//    }
//    ~smart_arr()  ///destructor
//    {
//        delete []arr;
//    }
//
//};
//
//
//
//int main()
//{
//    smart_arr<int> ob(5);
//
//}










#include <iostream>
using namespace std;

template<class t>
class smart_arr
{
private:
    int size_arr=0;
    int len_arr=0;
    t *arr ;
public:
    smart_arr() {}
    smart_arr(int l)
    {
        arr = new t [l];
        len_arr=l;
        input();
    }

    void input()
    {
        cout<<"How many elements u want to enter? ";
        int x;
        cin>>x;
        t v;

        for(int i=0; i<x; i++)
        {
            cin>>v;
            insertt(v);
        }
    }
        smart_arr& operator=(const smart_arr& ob2) ///operator =
    {
        size_arr = ob2.size_arr;
        delete[] arr;
        arr = new t [size_arr];
        for(int i=0; i<size_arr; i++)
        {
            arr[i]=ob2.arr[i];
        }
        return *this;
    }

    smart_arr(smart_arr& ob2)  ///copy constructor
    {
        size_arr = ob2.size_arr;
        arr = new t* [size_arr];
        for(int i=0; i<size_arr; i++)
        {
            arr[i]=ob2.arr[i];
        }

    }

    int size()
    {
        return size_arr;
    }
    void insertt(t var)
    {
        arr[size_arr]=var;
        size_arr++;
    }
     t& operator[](int k) ///access on position in the arr
    {
        if(k >= size_arr || k<0)
        {
            cout<<"Not valid pos"<<endl;
            return 0;
        }
        else
        {
            return arr[k];
        }
    }

    void display()
    {
        for(int i=0; i<size_arr; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    ~smart_arr()
    {
        delete []arr;
    }

};
int main()
{
    smart_arr<int> ob(20);

    ob.display();
    cout<<endl<<ob.size();
}

