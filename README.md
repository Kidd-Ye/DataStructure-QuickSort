# DataStructure-QuickSort
交换排序之快速排序

空间效率：
    由于快速排序是递归的，需要借助一个递归工作栈来保存每一层递归调用的必要信息，其容量应该与递归调用的最大深度一致。最好情况下为log2(N+1)向上取整；最坏情况下，因为要进行n-1次递归调用，所以栈的深度为O(n);平均情况下，栈的深度为O(log2 n)。

时间效率：
    最坏的情况是O(n^2),最理想是O(nlog2 n)。
