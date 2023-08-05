var a = []
var b = []

for(var i = 0; i < 10; i++){
	a[i] = function(){
		console.log(i)
	}
}

for(let j = 0; j < 10; j++){
	b[j] = function(){
		console.log(j)
	}
}

a[5]() // 10
b[5]() // 5
