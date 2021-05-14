
#include <iostream>
using namespace std;
class vector
{
private:
    float* V;
    int size;
public:
    void Vector(int setcap)
    {
        size = setcap;
        V = new float [size];
    }
    void Vector_del()
    {
        delete V;
    }
    void size_check()
    {
        cout << "size: "<<size << endl;
    }
    void add()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "V[" << i << "]: ";
            cin >> V[i];
        }
        display();
    }
    void display()
        {
            cout << "Vector: ";
            for (int i = 0; i < size; i++)
                cout  << V[i] << " ";
            cout << endl;
        }
    void pushback(int val)
        {
           
            V[size] = val;
            size++; 
            display();
        } 
    void clear()
        {
            size = 0;
            display();

        }
    void popback()
        {
            size--;
            display();
        }
    void insert(int pnt, float newval)
        {
            if (pnt >= 0 && pnt <= size)
            {
                
                for (int i = size; i >= pnt; i--)
                    V[i] = V[i-1];
                V[pnt] = newval;
                size++;
                display();
            }
        }
    void erase(int pnt)
        {
            if (pnt >= 0 && pnt < size)
            {
                for (int i = pnt; i < size; i++)
                    V[i] = V[i+1];
                size--;
                display();
            }
        }
    void sort(int x)
    {
        switch (x)
        {
        case 0:

            for (int i = 0; i < size; i++)
                for (int j = i + 1; j < size; j++)
                    if (V[i] < V[j])
                    {

                        int tmp = V[i];
                        V[i] = V[j];
                        V[j] = tmp;
                    }
            display();
            break;
        case 1:
        
            for (int i = 0; i < size; i++)
                for (int j = i + 1; j < size; j++)
                    if (V[i] > V[j])
                    {

                        int tmp = V[i];
                        V[i] = V[j];
                        V[j] = tmp;
                    }

            display();
            break;
        default: break;
        }
    }
};

   void main()
    {
        int n;
        cout << "Nhap so phan tu cua vector a : "; cin >> n;
        vector a;
        a.Vector(n);
        a.add();
        a.sort(0);
        a.popback();
        a.pushback(7);
        a.insert(2, 1);
        a.erase(1);
        a.size_check();
        //a.clear();
        //a.Vector_del();

   
    };