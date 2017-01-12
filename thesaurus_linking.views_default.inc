<?php
/**
 * @file
 * thesaurus_linking.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function thesaurus_linking_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vocabulary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Vocabulary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Vocabulary';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  /* Field: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['fields']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['fields']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['machine_name']['field'] = 'machine_name';
  /* Field: Taxonomy term: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  /* Field: Taxonomy term: Concept */
  $handler->display->display_options['fields']['field_concept']['id'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['table'] = 'field_data_field_concept';
  $handler->display->display_options['fields']['field_concept']['field'] = 'field_concept';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Taxonomy term: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  /* Field: Taxonomy term: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'field_data_status';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Contextual filter: Taxonomy term: Parent term */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['machine_name']['expose']['operator_id'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['label'] = 'Machine name';
  $handler->display->display_options['filters']['machine_name']['expose']['operator'] = 'machine_name_op';
  $handler->display->display_options['filters']['machine_name']['expose']['identifier'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  /* Filter criterion: Taxonomy term: Status (status) */
  $handler->display->display_options['filters']['status_value']['id'] = 'status_value';
  $handler->display->display_options['filters']['status_value']['table'] = 'field_data_status';
  $handler->display->display_options['filters']['status_value']['field'] = 'status_value';
  $handler->display->display_options['filters']['status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status_value']['expose']['operator_id'] = 'status_value_op';
  $handler->display->display_options['filters']['status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['status_value']['expose']['operator'] = 'status_value_op';
  $handler->display->display_options['filters']['status_value']['expose']['identifier'] = 'status_value';
  $handler->display->display_options['filters']['status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  /* Filter criterion: Taxonomy term: Status (status) */
  $handler->display->display_options['filters']['status_value_1']['id'] = 'status_value_1';
  $handler->display->display_options['filters']['status_value_1']['table'] = 'field_data_status';
  $handler->display->display_options['filters']['status_value_1']['field'] = 'status_value';
  $handler->display->display_options['filters']['status_value_1']['operator'] = '!=';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'vocabulary';
  $export['vocabulary'] = $view;

  return $export;
}
