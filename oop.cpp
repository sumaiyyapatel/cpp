#include<conio.h>
#include<stdio.h>
using namespace std;
class Rectangle
{
    private:
    int height,width;
    public:
   setdata(int h, int w)
    { height=h;
      width=w;
    }
  showdata()
    {
        cout<<"\nHeight= "<<height;
        cout<<"\nWidth= "<<width;
    }

};
int main()
{
    Rectangle R;
    R.setdata(100,200);
    R.showdata();

    getch();
}