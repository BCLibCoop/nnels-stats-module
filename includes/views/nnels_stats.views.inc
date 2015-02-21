<?php

/**
 * Implements hook_views_data().
 */
function nnels_stats_views_data() {
 
    $data = array();
 
    $data['nnels_stats']['table']['group'] = t('NNELS STATS');
 
    $data['nnels_stats']['table']['base'] = array(
        'title' => t('NNELS Stats'),
        'help' => t('Contains records we want exposed to Views.'),
    );
 
		$data['nnels_stats']['table']['join'] = array(
		    'node' => array(
		        'left_field' => 'nid',
		        'field' => 'orgid',
		    ),
		);		 


		// The ID field
		$data['nnels_stats']['visitid'] = array(
		    'title' => t('ID'),
		    'help' => t('The record ID.'),
		    'field' => array(
		        'handler' => 'views_handler_field_numeric',
		    ),
		    'sort' => array(
		        'handler' => 'views_handler_sort',
		    ),
		    'filter' => array(
		        'handler' => 'views_handler_filter_numeric',
		    ),
		);

		// The Created
 		$data['nnels_stats']['created'] = array(
	    'title' => t('Created'),
	    'help' => t('The timestamp.'),
	    'field' => array(
	        'handler' => 'views_handler_field_date',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort_date',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_date',
	    ),
		); 
		
		$data['nnels_stats']['authen_type'] = array(
		
	    'title' => t('Authentication Type'),
	    'help' => t('Authentication type'),
	    'field' => array(
	        'handler' => 'views_handler_field_numeric',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		$data['nnels_stats']['referring_url_type'] = array(
		
	    'title' => t('Referring URL Type'),
	    'field' => array(
	        'handler' => 'views_handler_field_numeric',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		$data['nnels_stats']['authen_success'] = array(
		
	    'title' => t('Successful Authentication?'),
	    'field' => array(
	        'handler' => 'views_handler_field_numeric', //views_handler_field_prerender_list??
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
		$data['nnels_stats']['authen_failure_reason'] = array(
		
	    'title' => t('Reason authentication failed'),
	    'field' => array(
	        'handler' => 'views_handler_field_numeric',
	    ),
	    'sort' => array(
	        'handler' => 'views_handler_sort',
	    ),
	    'filter' => array(
	        'handler' => 'views_handler_filter_numeric',
	    ),
		
		);
				
		$data['nnels_stats']['orgid'] = array(
		    'title' => t('Org ID'),
		    'help' => t('The Org NID.'),
		    'field' => array(
		        'handler' => 'views_handler_field_node',
		    ),
		    'sort' => array(
		        'handler' => 'views_handler_sort',
		    ),
		    'filter' => array(
		        'handler' => 'views_handler_filter_numeric',
		    ),
		    'relationship' => array(
		        'base' => 'node',
		        'field' => 'orgid',
		        'handler' => 'views_handler_relationship',
		        'label' => t('Org Node'),
		    ),
		    'argument' => array(
		        'handler' => 'views_handler_argument_node_nid',
		        'numeric' => TRUE,
		        'validate type' => 'nid',
		    ),
		); 
    return $data;
 
}