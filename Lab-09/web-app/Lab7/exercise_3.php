<html>
<body>
<?php 
	$size = $_POST["size"];
	echo "<table border =\"1\">";  
    	for ($row=1; $row <= $size; $row++) {   
        echo "<tr> \n";  
        	for ($col=1; $col <= $size; $col++) {   
            	$result = $col * $row;  
            	echo "<td>$result</td> \n";  
        	}  
        	echo "</tr>";  
    	}  
    	echo "</table>";

?>
</body>
</html>
