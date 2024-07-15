#include <iostream>

#include <string.h>
using namespace std;
void fun()

{  float node,*temp,head;
    int key, flag = 0;
    cout << "enter key: ";

    temp = head;

    cin >> key;
    while (temp != NULL)

    {

        if (key == temp->data)
        {

            flag = 1;
            break;
        }
        temp - temp->next;

        if (flag == 1)

            cout << "key matced: " << temp->data;

        else
    }
 
}