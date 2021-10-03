#include <iostream>
using namespace std;

int main() {
    
    int n1,n2,n3,sum;
    cin>>n1>>n2>>n3;
	int a1[n1]; int a2[n2]; int a3[n3];
	
	for (int i = 0; i < n1; i++)cin>>a1[i];
	for (int j = 0; j < n2; j++)cin>>a2[j];
	for (int k = 0; k < n3; k++)cin>>a3[k];    
	
	int i = 0, j = 0, k = 0;
	
	while (i < n1 && j < n2 && k < n3)
    {

         if (a1[i] == a2[j] && a2[j] == a3[k])
         {   cout << a1[i] << " ";   i++; j++; k++; }

         else if (a1[i] < a2[j])
             i++;

         else if (a2[j] < a3[k])
             j++;
 
         else
             k++;
    }	
	return 0;
}