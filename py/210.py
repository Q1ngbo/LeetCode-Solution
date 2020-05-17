class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:

        adjacent = [[] for i in range(numCourses)]
        visited = [0] * numCourses

        res = []

        for cur, pre in prerequisites:
            adjacent[cur].append(pre)

        def dfs(i):
            if visited[i] == 1:
                return False

            if visited[i] == 2:
                return True

            visited[i] = 1

            for k in adjacent[i]:
                if not dfs(k):
                    return False

            visited[i] = 2
            res.append(i)

            return True

        for i in range(numCourses):
            if not dfs(i):
                return []

        return res
