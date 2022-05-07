function main(input){
  const i=input.split(' ');
  const a=parseInt(i[0],10);
  const b=parseInt(i[1],10);
  if((a*b)%2==0){
      console.log('Even');
  } else{
      console.log('Odd');
  }
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));