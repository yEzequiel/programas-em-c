main()
{

 int medida;
 float centimetro,milimetro,decimetro,metro;

  printf("Digite o tamanho em centímetros: ");
  scanf("%f", &centimetro);

  printf("\nDigite para qual unidade medida \ndeseja converter:\n\n Digite 1: Metros\n Digite 2: Milímetros\n Digite 3: Decímetros\n \nDigite: ");
  scanf("%d", &medida);

if(medida == 1){
  metro = centimetro / 100;
  printf("\n%.2f centímetros equivale a\n%.2f metros ",centimetro,metro);
}
  else if(medida == 2){
  milimetro = centimetro * 10;
  printf("\n%.2f centímetros equivale a\n%.2f milímetros ",centimetro,milimetro);

}
  else if(medida == 3){
  decimetro = centimetro / 10;
  printf("\n%.2f centímetros equivale a\n%.2f decimetros",centimetro,decimetro);
}

  else{
  printf("Medida Inválida");
}
}