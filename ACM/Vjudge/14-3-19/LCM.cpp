//// CPP program to illustrate
//// boost::math::lcm function of C++
//#include <iostream>
//#include <boost/math/common_factor.hpp>
//
//using namespace std;
//
//int main()
//{
//	cout << "LCM(10,20) = " << boost::math::lcm(10,20)
//		<< endl;
//	return 0;
//}

// CPP program to illustrate
// undefined behavior of
// gcd function of C++ STL
#include <iostream>
#include <algorithm>

using namespace std;

int mod(int num,int base){
    if(num>=0)
        return num%base;
    else{
        num*=-1;
        num=num%base;
        return base-num;
    }
}

int main()
{
    cout<<mod(-7,5)<<endl;
    cout << "gcd(6, 20) = " <<6*20/( __gcd(6, 20)) << endl;
}
