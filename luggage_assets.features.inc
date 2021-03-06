<?php
/**
 * @file
 * luggage_assets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_assets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function luggage_assets_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function luggage_assets_node_info() {
  $items = array(
    'asset' => array(
      'name' => t('Asset'),
      'base' => 'node_content',
      'description' => t('Track purchased items, both past and present.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
