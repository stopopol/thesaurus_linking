<?php
/**
 * @file
 * thesaurus_linking.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function thesaurus_linking_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function thesaurus_linking_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_message_type().
 */
function thesaurus_linking_default_message_type() {
  $items = array();
  $items['vocabulary'] = entity_import('message_type', '{
    "name" : "vocabulary",
    "description" : "Vocabulary",
    "argument_keys" : [],
    "argument" : [],
    "category" : "message_type",
    "data" : {
      "token options" : { "clear" : 0 },
      "purge" : { "override" : 0, "enabled" : 0, "quota" : "", "days" : "" }
    },
    "language" : "",
    "arguments" : null,
    "message_text" : { "und" : [
        {
          "value" : "Number of tags is \\u003Cb\\u003E[message:field-status]:\\u003C\\/b\\u003E  [message:field_amount] in \\u003Cspan style=\\u0022color:red\\u0022\\u003E[message:field_vocabulary]\\u003C\\/span\\u003E vocabulary",
          "format" : "full_html",
          "safe_value" : "\\u003Cp\\u003ENumber of tags is \\u003Cb\\u003E[message:field-status]:\\u003C\\/b\\u003E  [message:field_amount] in \\u003Cspan style=\\u0022color:red\\u0022\\u003E[message:field_vocabulary]\\u003C\\/span\\u003E vocabulary\\u003C\\/p\\u003E\\n"
        }
      ]
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function thesaurus_linking_node_info() {
  $items = array(
    'thesaurus' => array(
      'name' => t('Thesaurus'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
