<?php
/**
 * @file
 * luggage_assets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_assets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'assets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Assets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Assets';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
    7 => '7',
    4 => '4',
    5 => '5',
    3 => '3',
    13 => '13',
    8 => '8',
    9 => '9',
    11 => '11',
    10 => '10',
    6 => '6',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_asset_owner' => 'field_asset_owner',
    'field_asset_value' => 'field_asset_value',
    'field_status' => 'field_status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asset_owner' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_asset_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_asset_status']['id'] = 'field_asset_status';
  $handler->display->display_options['fields']['field_asset_status']['table'] = 'field_data_field_asset_status';
  $handler->display->display_options['fields']['field_asset_status']['field'] = 'field_asset_status';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_asset_status_value']['id'] = 'field_asset_status_value';
  $handler->display->display_options['sorts']['field_asset_status_value']['table'] = 'field_data_field_asset_status';
  $handler->display->display_options['sorts']['field_asset_status_value']['field'] = 'field_asset_status_value';
  $handler->display->display_options['sorts']['field_asset_status_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_asset_status_value']['expose']['label'] = 'Funding Status';
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_asset_status_value_1']['id'] = 'field_asset_status_value_1';
  $handler->display->display_options['sorts']['field_asset_status_value_1']['table'] = 'field_data_field_asset_status';
  $handler->display->display_options['sorts']['field_asset_status_value_1']['field'] = 'field_asset_status_value';
  $handler->display->display_options['sorts']['field_asset_status_value_1']['expose']['label'] = 'Funding Status (field_asset_status)';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'asset' => 'asset',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Summary';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Asset Owner */
  $handler->display->display_options['fields']['field_asset_owner']['id'] = 'field_asset_owner';
  $handler->display->display_options['fields']['field_asset_owner']['table'] = 'field_data_field_asset_owner';
  $handler->display->display_options['fields']['field_asset_owner']['field'] = 'field_asset_owner';
  /* Field: Content: Value */
  $handler->display->display_options['fields']['field_asset_value']['id'] = 'field_asset_value';
  $handler->display->display_options['fields']['field_asset_value']['table'] = 'field_data_field_asset_value';
  $handler->display->display_options['fields']['field_asset_value']['field'] = 'field_asset_value';
  $handler->display->display_options['fields']['field_asset_value']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'assets';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Project Funding';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['assets'] = $view;

  return $export;
}
