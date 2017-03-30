#include<bits/stdc++.h>
struct Point
{
  int x;
  int y;
};
int euclid(struct Point p,struct Point c)
{
  return ((p.x-c.x)*(p.x-c.x)+(p.y-c.y)*(p.y-c.y));
}
int findx(struct Point p,struct Point c)
{
  return p.x-c.x;
}
int findy(struct Point p,struct Point c)
{
  return p.y-c.y;
}
int main()
{
  int n,k,maxx=0,maxy=0;
  scanf("%d %d",&n,&k);
  struct Point P[n];
  struct Point C[k];
  vector< vector<Point> >v(k);
  int change=0;
  int counter[n]={0};
  srand (time(NULL));
  for(i=0;i<n;i++)
    {
      scanf("%d %d",&P[i].x,&P[i].y);
      maxx=max(maxx,P[i].x);
      maxy=max(maxy,P[i].y);
    }
  for(i=0;i<k;i++)
    {
      C[i].x=rand()%maxx;
      c[i].y=rand()%maxy;
    }
  while(change!=0)
  {
    for(i=0;i<n;i++)
    {
      dist=INT_MAX;
      for(j=0;j<k;j++)
        {
          dist=euclid(C[j],P[i]);
          if(mind>dist)
            coord=j;
        }
        v[coord].push_back(P[i]);
        if(coord!=counter[i])
          {
            counter[i]=coord;
            change=1;
          }
    }
    for(i=0;i<k;i++)
    {
      for(j=0;j<v[i].size();j++)
      {
        x1+=findx(C[i],v[i][j]);
        y1+=findy(C[i],v[i][j]);
      }
      C[i].x=x1/v[i].size();
      C[i].y=y1/v[i].size();
    }
  }
  return 0;
}
