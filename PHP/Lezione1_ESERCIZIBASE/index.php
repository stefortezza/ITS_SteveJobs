<?php

echo "<h1>ESERCIZIO 1</h1>";
$num= -1;
if($num>0){
    echo "Il numero e`positivo";
} else if ($num <0){
    echo "Il numero e`negativo";
} else {
    echo "Il numero e`zero";    
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 2</h1>";
$eta= 17;
if($eta>=18){
    echo "Sei maggiorenne";
} else {
    echo "Sei minorenne";    
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 3</h1>";
$numero= 4;
if($numero%2==0){
    echo "Il numero è pari";
} else {
    echo "Il numero è dispari";    
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 4</h1>";
$voto= 5;
if($voto==6){
    echo "Voto sufficiente";
} else if($voto>=7 && $voto<=8) {
    echo "Voto buono";    
} elseif($voto>=9 && $voto<= 10) {
    echo "Voto ottimo";
} else {
    echo "Voto insufficiente";
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 5</h1>";
$prezzo = 120;
$sconto = 0;
if($prezzo> 100){
    $sconto = 20;
    $prezzo_scontato = $prezzo - ( $prezzo * $sconto )/100;
    echo "Il prezzo scontato è: " . $prezzo_scontato;
} else if($prezzo>=50 && $prezzo<=100){
        $sconto = 10;
        $prezzo_scontato = $prezzo - ( $prezzo * $sconto )/100;
        echo "Il prezzo scontato è: " . $prezzo_scontato;
} else {
    echo "Il prezzo è: " . $prezzo;
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 6</h1>";
$numeriDa1a10 = [1,2,3,4,5,6,7,8,9,10];

for($i= 0; $i< 10; $i++){
    echo $numeriDa1a10[$i] . "<br>";
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 7</h1>";
$tabellina = 5;
for($i=1; $i<=10; $i++){
    $risultato = $tabellina * $i;
    echo "$tabellina x $i = $risultato <br>";
}
?>
<!-- -------------------- -->
<?php
echo "<h1>ESERCIZIO 8</h1>";
$tabellina = 5;
for($i=1; $i<=10; $i++){
    $risultato = $tabellina * $i;
    echo "$tabellina x $i = $risultato <br>";
}
?>