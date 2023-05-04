char a = '1';
    t1+=a;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==t1[i]) t1+='0';
        else t1+='1';
    }
    a='0';
    t2+=a;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==t2[i]) t2+='0';
        else t2+='1';
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(t1[i]=='1') maxi++;
        if(t2[i]=='1') mini++;
    }
    
    cout << max(maxi,mini) << endl;