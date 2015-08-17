<?php
/**
 * @file
 * news_importer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_importer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_import:import
  $menu_links['navigation_import:import'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'import',
    'router_path' => 'import',
    'link_title' => 'Import',
    'options' => array(
      'identifier' => 'navigation_import:import',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Import');

  return $menu_links;
}
