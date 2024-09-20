/**
 * @param {string[]} strs
 * @return {string[][]}
 */
var groupAnagrams = function(strs) {
    const mapp = new Map()

    for(const x of strs){
        let word = x.split('').sort().join('');
         if (!mapp.has(word)) {
                mapp.set(word, []);
            }
        mapp.get(word).push(x);
    }

    const ans = []
    for(const x of mapp.values()){
        ans.push(x)
    }
    return ans
};