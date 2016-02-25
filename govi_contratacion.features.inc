<?php
/**
 * @file
 * govi_contratacion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function govi_contratacion_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function govi_contratacion_node_info() {
  $items = array(
    'contratacion' => array(
      'name' => t('Contratación'),
      'base' => 'node_content',
      'description' => t('Utilice este tipo de contenido para gestionar y clasificar los documentos relacionados con la Contratación de la Entidad'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
