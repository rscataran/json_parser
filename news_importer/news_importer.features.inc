<?php
/**
 * @file
 * news_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news_importer_node_info() {
  $items = array(
    'old_news' => array(
      'name' => t('Old News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
