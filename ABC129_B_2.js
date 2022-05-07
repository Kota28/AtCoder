'use strict'
function Main(input){
    var w=input.split("\n")[1].split(" ").map((w)=>Number(w));
    var ans=10001;
    var sum1=0;
    var sum2=0;
    for(var i=0;i<w.length;i++){
        sum1+=w[i];
    }
    for(var i=0;i<w.length-1;i++){
        sum2+=w[i];
        sum1-=w[i];
        ans=Math.min(ans,Math.abs(sum1-sum2));
    }
    console.log(ans);
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));