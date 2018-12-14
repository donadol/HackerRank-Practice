/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    const check = ['a','e','i','o','u'];
    for(let char of s.toLowerCase()){
      //check if each character in string is in vowel array
      if(check.includes(char))
        console.log(char);
    }
    for(let char of s.toLowerCase()){
      //check if each character in string is in vowel array
      if(!check.includes(char))
        console.log(char);
    }
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}
