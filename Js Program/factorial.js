function factorial(n){
    let ans = 1;
    if (n == 0 || n == 1){
      return ans;
    }else{
      for(var i = n; i >= 1; i--){
        ans = ans * i;
      }
      return ans;
    }  
  }
  let n = 4;
  ans = factorial(n)
  console.log("The factorial of " + n + " is " + ans);