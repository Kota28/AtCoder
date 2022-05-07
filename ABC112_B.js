function Main(input){
    limit=input.split("\n");
    eachlimit=limit[0].split(" ");
    N=Number(eachlimit[0]);
    T=Number(eachlimit[1]);
    var ans=1001;
    for(i=1;i<=N;i++){
        info=limit[i].split(" ");
        if(T>=info[1]){
            c=Number(info[0]);
            ans=Math.min(ans,c);
        }
    }
    if(ans==1001){
        console.log('TLE');
    } else{
        console.log(ans);
    }
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));