/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int length=mountainArr.length();
        int l=0,r=length-1,h;
        while(l<=r)
        {
            if(mountainArr.get((l+r)/2-1)<mountainArr.get((l+r)/2)&&mountainArr.get((l+r)/2)>mountainArr.get((l+r)/2+1))
            {
                h=(l+r)/2;
                break;
            }
            else if(mountainArr.get((l+r)/2-1)<mountainArr.get((l+r)/2)&&mountainArr.get((l+r)/2)<mountainArr.get((l+r)/2+1))
                l=(l+r)/2;
            else
            {
                r=(l+r)/2;
            }
        }
        if(mountainArr.get(h)<target)
            return -1;
        if(mountainArr.get(h)==target)
            return h;
        l=0;r=h;int t=-1;
        while(l<=r)
        {
            if(mountainArr.get((l+r)/2)<target)
                l=(l+r)/2+1;
            else if(mountainArr.get((l+r)/2)>target)
                r=(l+r)/2-1;
            else if(mountainArr.get((l+r)/2)==target)
            {
                t=(l+r)/2;
                break;
            }
        }
        if(t!=-1)
            return t;
        l=h;r=length-1;t=-1;
        while(l<=r)
        {
            if(mountainArr.get((l+r)/2)<target)
                r=(l+r)/2-1;
            else if(mountainArr.get((l+r)/2)>target)
                l=(l+r)/2+1;
            else if(mountainArr.get((l+r)/2)==target)
            {
                t=(l+r)/2;
                break;
            }
        }
        return t;
    }
};