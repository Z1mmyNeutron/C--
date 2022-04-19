/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var runningSum = function(nums) {
    let output = [];
    let numHolder = 0;
    for(let i = 0; i < nums.length; i++){
        numHolder = numHolder +  nums[i];
        output.push(numHolder);
    }
    return output;
};