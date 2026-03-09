<?php
$name= "Stefano Fortezza";
$age= 27;
$color= "blue"; // Variabile per il colore preferito

echo "<h1> My name is $name </h1>";
echo "<h1> I am $age years old.</h1>";

?>	


<!-- Utilizzo della variabile $color per impostare il colore del testo -->
<h2 style="color: <?php echo $color; ?>;">My favorite color isss <?php echo $color; ?></h2>

<?php
$color= "red"; // Modifica il colore a rosso
echo "<h2 style='color: $color;'>My favorite color is $color</h2>"; // Utilizzo della variabile $color per impostare il colore del testo dopo la modifica
?>

