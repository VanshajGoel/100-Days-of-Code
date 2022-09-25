/*You are required to complete this method*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long ele1 = 0, ele2 = 0, mod = 1000000007;
  
  while (l1)
  {
      ele1 = (ele1*10 + l1->data)%mod;
      l1 = l1 -> next;;
  }
  
  while (l2)
  {
      ele2 = (ele2*10 + l2->data)%mod;
      l2 = l2 -> next;;
  }
  
  return (ele1*ele2)%mod;
}
