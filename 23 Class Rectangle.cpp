#include<iostream>
using namespace std;

class Rectangle{
	private:
		float width,height;
	public:
		Rectangle(){
			width=1;
			height=1;
		}
		Rectangle(float w,float h){
			width=w;
			height=h;
		}
		void setWidth(float w){
			width=w;
		}
		void setHeight(float h){
			height=h;
		}
		float getWidth(){
			return width;
		}
		float getHeight(){
			return height;
		}
		float calcArea(){
			return width*height;
		}
};

int main()
{
	Rectangle r1,r2(1,2);
	cout<<"Area is "<<r1.calcArea()<<endl;
	cout<<"Area is "<<r2.calcArea()<<endl;
	
	cout<<"\nModifying width and height of r1."<<endl;
	r1.setWidth(5);
	r1.setHeight(5);
	cout<<"Area of r1 is "<<r1.calcArea()<<endl;
	
	cout<<"\nInput width and height of r2:"<<endl;
	float w,h;
	cin>>w;
	cin>>h;
	r2.setWidth(w);
	r2.setHeight(h);
	cout<<"Area of r2 is "<<r2.calcArea()<<endl;
	
	return 0;
}