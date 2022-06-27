#include <stdio.h>

void main()
{
    int k;
    cout << "enter length";
    cin >> n;
    cout << "array is:";
    for (k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    int ch;
    int num, pos;
    double element;
    while (ch != 5)
    {
        cout << "1> Insert";
        cout << "\n2> Delete";
        cout << "\n3> location";
        cout << "\n4> Show";
        cout << "\n5> Quit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "enter element:";
            cin >> num;
            cout << "enter pos.:";
            cin >> pos;
            a_insert(arr, pos);
            break;
      
        case 2:
            cout << "enter element";
            a_location(arr,pos);
            break;
        
        default:
            cout << "Invalid input" << endl;
        }
    }
    getch();
}

int* insertX(int n, int arr[],
             int x, int pos)
{
    int i;
      n++;
  
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
  
    arr[pos - 1] = x;
  
    return arr;

}
void *a_location(int arr[],int n){
    
    while (i < n)
    {
        if (arr[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        cout << "Element " << elem << " is present at index " << i
             << " in the given array";
    }
    else {
        cout << "Element is not present in the given array";
    }
 


}