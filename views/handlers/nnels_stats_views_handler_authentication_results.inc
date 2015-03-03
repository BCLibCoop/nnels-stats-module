<?php

 /**
 * @file
 * Handles login enumerations
 */
class nnels_stats_views_handler_authentication_results extends views_handler_field {
 function render($values) {
 	 $me = (integer)$values->nnels_stats_authen_result;
 	 $arr = array( 
 	 	0 => t('no login attempt'), 

 	 	1 => t('successful login'), 
 	 	2 => t('username unknown'), 
 	 	3 => t('bad password'), 
 	 	4 => t('invalid patron type'),
 	 	5 => t('blocked account'),
 	 	6 => t('returning user (logged in)'),
 	 	
 	 );
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