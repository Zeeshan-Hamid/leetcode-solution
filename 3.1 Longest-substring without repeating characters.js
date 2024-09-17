/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const n = s.length
    let charSet = new Set()
    let left = 0
    let maxL = 0;
    for(let right = 0; right<n; right++){
        if(!charSet.has(s[right])){
            charSet.add(s[right])
            maxL = Math.max(maxL, right-left+1)
        }else{
            while(charSet.has(s[right])){
                charSet.delete(s[left])
                left+=1
            }
            charSet.add(s[right])
        }
    }
    return maxL
};