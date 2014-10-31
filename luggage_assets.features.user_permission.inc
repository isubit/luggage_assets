<?php
/**
 * @file
 * luggage_assets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_assets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create asset content'.
  $permissions['create asset content'] = array(
    'name' => 'create asset content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any asset content'.
  $permissions['delete any asset content'] = array(
    'name' => 'delete any asset content',
    'roles' => array(
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own asset content'.
  $permissions['delete own asset content'] = array(
    'name' => 'delete own asset content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any asset content'.
  $permissions['edit any asset content'] = array(
    'name' => 'edit any asset content',
    'roles' => array(
      'content editor' => 'content editor',
      'content publisher' => 'content publisher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own asset content'.
  $permissions['edit own asset content'] = array(
    'name' => 'edit own asset content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
