void SortedStack :: sort()
{
   //Your code here
   int n = s.size();
   int arr[n];
   for( int i = 0 ; i < n ; i++ )
   {
       int t = s.top();
       arr[i] = t;
       s.pop();
   }
   std::sort(arr,arr+n);
   for (int i = 0; i< n ; i++)
   {
       s.push (arr[i]);
   }
}
