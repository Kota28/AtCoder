function Main(input){
    const position=input.split(' ');
    const x1=Number(position[0]);
    const y1=Number(position[1]);
    const x2=Number(position[2]);
    const y2=Number(position[3]);
    const x4=x1+y1-y2;
    const y4=y1-x1+x2;
    const x3=x4+y4-y1;
    const y3=y4+x1-x4;
    console.log(x3 + ' ' + y3 + ' '+x4 +' '+y4);
}
Main(require("fs").readFileSync("/dev/stdin", "utf8"));