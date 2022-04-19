/**
 * @param {string} s
 * @return {string}
 */
 var sortSentence = function(s) {
    const result = []
    
    for (let word of s.split(' ')) {
        result[word[word.length - 1] - 1] = word.slice(0, word.length - 1)
    }
    
    return result.join(' ')
};



//Other not so clean way
/**
 * @param {string} s
 * @return {string}
 */
 var sortSentence = function(s) {
    let holder = s.split(" ");
     let check = 1;
     let counter = holder.length;
     let arr = [];
     while(counter >= 0){
         checkString = check.toString();
         for(let i = 0; i < holder.length; i++){
             if(holder[i].includes(checkString)){
                 let pushed = holder[i].replace(checkString, "");
                 arr.push(pushed);
             }
            
        }
         check++;
         counter--;
         
     }
     
    let sentence = arr.join(" ");
      
    
   return sentence;
 };