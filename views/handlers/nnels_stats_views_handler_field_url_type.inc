<?php

 /**
 * @file
 * Handles filtering by networks
 */
class nnels_stats_views_handler_field_url_type extends views_handler_field {
 function render($values) {
 	 $me = (integer)$values->nnels_stats_referring_url_type;
 	 $arr = array(
 	 	1 => t("Direct Link"), 
 	  2 => t("External URL"),
 	  3 => t("Referring URL"),
 	  4 => t("On site link"),
 	 );
 	 //dpm($arr);
 	 if (array_key_exists($me, $arr)) return $arr[$me] . " ($me)";  
	 
   return "ENUMERATION COMING SOON for " . $me;
  }
  function option_definition() {
    $options = parent::option_definition();
    //define our custom settings fields
    $options['enumerations'] = array();
    $options['marks_obtained'] = array();
    return $options;
  }
 
}
