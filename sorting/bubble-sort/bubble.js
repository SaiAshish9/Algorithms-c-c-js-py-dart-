const x = [1,4,3,2]

for(let i=0;i<x.length;i++)
    for(let j=0;j<x.length-i-1;j++)
    	if(x[j]>x[j+1])
    		x[j]=[x[j+1],x[j+1]=x[j]][0]

console.log(x)