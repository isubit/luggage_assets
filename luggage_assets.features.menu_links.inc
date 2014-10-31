<?php
/**
 * @file
 * luggage_assets.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function luggage_assets_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_assets:assets
  $menu_links['main-menu_assets:assets'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'assets',
    'router_path' => 'assets',
    'link_title' => 'Assets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_assets:assets',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_asset:node/add/asset
  $menu_links['navigation_asset:node/add/asset'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/asset',
    'router_path' => 'node/add/asset',
    'link_title' => 'Asset',
    'options' => array(
      'attributes' => array(
        'title' => 'Track purchased items, both past and present.',
      ),
      'identifier' => 'navigation_asset:node/add/asset',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Asset');
  t('Assets');


  return $menu_links;
}
