<?php
/**
 * @file
 * thesaurus_linking.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function thesaurus_linking_field_default_fields() {
  $fields = array();

  // Exported field: 'message-vocabulary-field_amount'.
  $fields['message-vocabulary-field_amount'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_amount',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'vocabulary',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => '',
          ),
          'type' => 'number_integer',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'message',
      'field_name' => 'field_amount',
      'label' => 'Amount',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'message-vocabulary-field_status'.
  $fields['message-vocabulary-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'New' => 'New',
          'Update' => 'Update',
          'Deprecated' => 'Deprecated',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'vocabulary',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'message',
      'field_name' => 'field_status',
      'label' => 'Status',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'apply_chosen' => '',
        ),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'message-vocabulary-field_vocabulary'.
  $fields['message-vocabulary-field_vocabulary'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_vocabulary',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'vocabulary',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'message',
      'field_name' => 'field_vocabulary',
      'label' => 'Vocabulary',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-thesaurus-field_purpose_of_taxonomy'.
  $fields['node-thesaurus-field_purpose_of_taxonomy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_purpose_of_taxonomy',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => 255,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'thesaurus',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_purpose_of_taxonomy',
      'label' => 'Purpose of Taxonomy',
      'required' => FALSE,
      'settings' => array(
        'required_by_role' => array(),
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-thesaurus-field_sparql_query'.
  $fields['node-thesaurus-field_sparql_query'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sparql_query',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'thesaurus',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sparql_query',
      'label' => 'SPARQL Query',
      'required' => 0,
      'settings' => array(
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-thesaurus-field_update_frequency'.
  $fields['node-thesaurus-field_update_frequency'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_update_frequency',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => '',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'thesaurus',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 3,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_update_frequency',
      'label' => 'Update Frequency',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-thesaurus-field_update_unit'.
  $fields['node-thesaurus-field_update_unit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_update_unit',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => '',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datetime',
    ),
    'field_instance' => array(
      'bundle' => 'thesaurus',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '(hour,day,week)',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
          ),
          'type' => 'date_default',
          'weight' => 4,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_update_unit',
      'label' => 'Update Unit',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'required_by_role' => array(
          1 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_popup',
        'weight' => '6',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('(hour,day,week)');
  t('Amount');
  t('Purpose of Taxonomy');
  t('SPARQL Query');
  t('Status');
  t('Update Frequency');
  t('Update Unit');
  t('Vocabulary');

  return $fields;
}
