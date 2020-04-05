import java.util.*;

class Vestigium {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t,n;
        int c=1;
        t = sc.nextInt();
        n = sc.nextInt();
        int k1[] = new int[t+1];
        int r1[] = new int[t+1];
        int c1[] = new int[t+1];
        for(int z=1; z<=t; z++)
        {
            int a[][] = new int[n][n];
            if (t>0 && t<=100)
            {
                if (n>0 && n<=100)
                {
                    for (int i=0;i<n;i++)
                    {
                        for (int j=0;j<n;j++)
                        {
                            a[i][j]=sc.nextInt();
                        }
                    }
                }
                else{}
            }

            int k=0;
            for(int i=0; i<n;i++)
            {
                for (int j=0; j<n;j++)
                {
                    if(i==j)
                    {
                        k += a[i][j];
                    }

                }
            }
            k1[c]=k;
            int ro,co;
            for(int i=0; i<n; i++)
            {
                ro=0;
                co=0;
                for(int j=0; j<n; j++)
                {

                    for (int l=j+1; l<n; l++)
                    {
                        if (a[i][j] == a[i][l])
                        {
                            ro += 1;
                        }
                        if (a[j][i] == a[j][l])
                        {
                            co += 1;
                        }
                    }
                    if(ro > 0)
                        r1[c] += 1;
                    if(co > 0)
                        c1[c] += 1;
                }
            }
            r1[c]/=2;
            c1[c]/=2;
        c++;
        }
        for(int i=1;i<=t;i++)
        {
            System.out.println("Case #"+i+": "+k1[i]+" "+r1[i]+" "+c1[i]);
        }
    }
}
