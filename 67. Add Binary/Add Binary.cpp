inline char add(char t1,char t2,char &carry )
{
    int Count = 0;
if(t1 == '1') Count++;
if(t2 == '1') Count++;
if(carry == '1')Count++;

if(Count == 0)
{
    return '0';
}
if(Count == 1)
{
    carry = '0';
    return '1';
}
if(Count == 2)
{
    carry = '1';
    return '0';
}
if(Count == 3)
{
    carry = '1';
    return '1';
}
return '0';
}

string addBinary(string a, string b) 
{
    string Fin = "";
    int i = a.size()- 1;
    int j = b.size() -1;
    char Carry = '0';

    while(i >= 0 && j >= 0)
    {
        Fin = add(a[i],b[j],Carry) + Fin;
        i--;
        j--;
    }    
    while(i >= 0)
    {
        Fin = add(a[i],'0',Carry) + Fin;
        i--;
    }    
    while(j >= 0)
    {
        Fin = add('0',b[j],Carry) + Fin;
        j--;
    }    
    if(Carry == '1') Fin = '1' + Fin;
    return Fin;

}