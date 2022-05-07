function Main(arg){
    arg=arg.trim().split('\n');
    var n=Number(arg.shift());
    var a=arg[0].split(' ').map(str=>parseInt(str,10));
    const b=arg[1].split(' ').map(str=>parseInt(str,10));
    const c=arg[2].split(' ').map(str=>parseInt(str,10));
    var ans=0;

    for(var i=0;i<n;i++){
        ans+=b[a[i]-1];
        if(a[i]+1==a[i+1]){
            ans+=c[a[i]-1];
        }
    }
    console.log(ans)
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));