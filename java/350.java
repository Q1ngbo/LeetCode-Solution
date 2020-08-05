class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        List<Integer> res = new LinkedList<Integer>();
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int ch:nums1){
            map.put(ch, map.getOrDefault(ch, 0)+1);
        }

        for (int ch:nums2){
            if(map.containsKey(ch) && map.get(ch) > 0){
                res.add(ch);
                map.put(ch, map.get(ch)-1);
            }
        }

        int[] list = new int[res.size()];
        for(int i=0; i< res.size();i++){
            list[i] = res.get(i);
        }

        return list;

    }
}