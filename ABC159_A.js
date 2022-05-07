function Main(input) {
    var num = input.split(' ');
    var odds = num[1];
    var even = num[0];
    console.log((even * (even - 1) / 2) + (odds * (odds - 1) / 2))
    
  }
  Main(require("fs").readFileSync("/dev/stdin", "utf8"));
  