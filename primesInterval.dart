import 'dart:io';

void main(){
  print('Digite o primeiro valor do intervalo: ');
  int? v1 = int.parse(stdin.readLineSync()!);
  print('Digite o segundo valor do intervalo: ');
  int? v2 = int.parse(stdin.readLineSync()!);

  if(v1 > v2){loop(v1,v2);}
  else if(v1 < v2){loop(v2,v1);}
}

void loop(int maior, int menor){  //função para imprimir os valores primos (argumentos: valores do intervalo)
  var vetor = [];
  if(maior == menor){
    if(primo(maior) == true){
      print(maior);
      print('é primo.');
    }
  }
  for(int x = menor; x <= maior; x++){
    if(primo(x) == true){vetor.add(x);}
  }
  print('O numero de primos no intervalo é:');
  print(vetor.length);
  print('E os valores primos são:');
  print(vetor);
}

bool? primo(int n){  //função para verificar se o valor é primo (argumento: valor do loop)
  int i;
  bool? cond;
  if(n == 2){
    cond = true;
  }
  for(i = 2; i < n; i++){
    if(n % i == 0){
      cond = false;
      break;
    }
    else{
      cond = true;
    }
  }
  return cond;
}