    if(P[i]=='a'||P[i]=='e'||P[i]=='i'||P[i]=='o'||P[i]=='u')
        {
                go(i+1,cnt+1,mo+1,ja,s+P[i]);
        }
        else
        {
                go(i+1,cnt+1,mo,ja+1,s+P[i]);
        }

        go(i+1,cnt,mo,ja,s);
    